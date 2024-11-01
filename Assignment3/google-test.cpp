#include <gtest/gtest.h>
#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "Planet.hpp"
#include "Weapon.hpp"
#include "Dino.hpp"

TEST(WeaponTest, 1)
{
    Weapon w;
    EXPECT_EQ(w.getName(), "default");
    EXPECT_EQ(w.getAmmo(), 10u);
    EXPECT_EQ(w.getDamage(), 0u);
}

TEST(WeaponTest, 2)
{
    Weapon w("Blaster", 20, 50);
    EXPECT_EQ(w.getName(), "Blaster");
    EXPECT_EQ(w.getAmmo(), 20u);
    EXPECT_EQ(w.getDamage(), 50u);
}

TEST(WeaponTest, 3)
{
    Weapon w;
    w.setName("Cannon");
    w.setAmmo(15);
    w.setDamage(40);
    EXPECT_EQ(w.getName(), "Cannon");
    EXPECT_EQ(w.getAmmo(), 15u);
    EXPECT_EQ(w.getDamage(), 40u);
}

TEST(PlanetTest, 1)
{
    Planet p;
    EXPECT_EQ(p.getName(), "Unknown");
    EXPECT_EQ(p.getPopulation(), 0u);
}

TEST(PlanetTest, 2)
{
    Planet p("Cybertron");
    EXPECT_EQ(p.getName(), "Cybertron");
    EXPECT_EQ(p.getPopulation(), 0u);
}

TEST(PlanetTest, 3)
{
    Planet p;
    p.setName("Earth");
    p.setPopulation(100);
    EXPECT_EQ(p.getName(), "Earth");
    EXPECT_EQ(p.getPopulation(), 100u);
}

TEST(TransformerTest, 1)
{
    Transformer t;
    EXPECT_EQ(t.getName(), "unnamed");
    EXPECT_EQ(t.getSpeed(), 0u);
    EXPECT_EQ(t.getStrength(), 0u);
    EXPECT_EQ(t.getDurability(), 0u);
    EXPECT_EQ(t.getWeapon().getName(), "default");
    EXPECT_EQ(t.getPlanet(), nullptr);
}

TEST(TransformerTest, 2)
{
    Weapon w("Laser", 30, 60);
    Transformer t("Optimus", 50, 80, 70, w);
    EXPECT_EQ(t.getName(), "Optimus");
    EXPECT_EQ(t.getSpeed(), 50u);
    EXPECT_EQ(t.getStrength(), 80u);
    EXPECT_EQ(t.getDurability(), 70u);
    EXPECT_EQ(t.getWeapon().getName(), "Laser");
    EXPECT_EQ(t.getPlanet(), nullptr);
}

TEST(TransformerTest, 3)
{
    Transformer t;
    t.setName("Bumblebee");
    t.setSpeed(60);
    t.setStrength(70);
    t.setDurability(65);
    Weapon w("Stinger", 25, 55);
    t.setWeapon(w);
    EXPECT_EQ(t.getName(), "Bumblebee");
    EXPECT_EQ(t.getSpeed(), 60u);
    EXPECT_EQ(t.getStrength(), 70u);
    EXPECT_EQ(t.getDurability(), 65u);
    EXPECT_EQ(t.getWeapon().getName(), "Stinger");
}

TEST(TransformerTest, 4)
{
    Transformer t;
    Planet p("Cybertron");
    t.setPlanet(&p);
    EXPECT_EQ(t.getPlanet()->getName(), "Cybertron");
    EXPECT_EQ(p.getPopulation(), 1u);

    t.setPlanet(&p);
    EXPECT_EQ(p.getPopulation(), 1u);

    Planet p2("Earth");
    t.setPlanet(&p2);
    EXPECT_EQ(t.getPlanet()->getName(), "Earth");
    EXPECT_EQ(p.getPopulation(), 0u);
    EXPECT_EQ(p2.getPopulation(), 1u);
}

TEST(TransformerTest, 5)
{
    Transformer t;
    EXPECT_TRUE(t.block());
    EXPECT_TRUE(t.shield());

    Weapon w("Cannon", 0, 50);
    t.setWeapon(w);

    EXPECT_FALSE(t.fire());

    t.getWeapon().setAmmo(5);
    EXPECT_TRUE(t.fire());
    EXPECT_EQ(t.getWeapon().getAmmo(), 4u);
}

TEST(AutobotTest, 1)
{
    Autobot a;
    EXPECT_EQ(a.getName(), "unnamed");
    EXPECT_EQ(a.getKarma(), 0);
    EXPECT_EQ(a.getTransformation(), "");
}

TEST(AutobotTest, 2)
{
    Weapon w("Blaster", 20, 50);
    Autobot a("Optimus", 50, 80, 70, w, "Truck", 100);
    EXPECT_EQ(a.getName(), "Optimus");
    EXPECT_EQ(a.getKarma(), 100);
    EXPECT_EQ(a.getTransformation(), "Truck");
    EXPECT_EQ(a.getWeapon().getName(), "Blaster");
}

TEST(AutobotTest, 3)
{
    Weapon w("Blaster", 20, 50);
    Autobot a("Optimus", 50, 80, 70, w, "Truck", 100);

    EXPECT_FALSE(a.transformBack());
    EXPECT_TRUE(a.transformtoAlt());
    EXPECT_FALSE(a.transformtoAlt());
    EXPECT_TRUE(a.transformBack());
}
TEST(DecepticonTest, 1)
{
    Decepticon d;
    EXPECT_EQ(d.getName(), "unnamed");
    EXPECT_EQ(d.getKarma(), 0);
    EXPECT_EQ(d.getTransformation(), "");
}

TEST(DecepticonTest, 2)
{
    Weapon w("Cannon", 30, 70);
    Decepticon d("Megatron", 60, 90, 80, w, "Jet", -100);
    EXPECT_EQ(d.getName(), "Megatron");
    EXPECT_EQ(d.getKarma(), -100);
    EXPECT_EQ(d.getTransformation(), "Jet");
    EXPECT_EQ(d.getWeapon().getName(), "Cannon");
}

TEST(DecepticonTest, 3)
{
    Weapon w("Cannon", 30, 70);
    Decepticon d("Megatron", 60, 90, 80, w, "Jet", -100);

    EXPECT_FALSE(d.transformBack());
    EXPECT_TRUE(d.transformtoAlt());
    EXPECT_FALSE(d.transformtoAlt());
    EXPECT_TRUE(d.transformBack());
}
TEST(DinoTest, 1)
{
    Dinosaur d;
    EXPECT_EQ(d.getName(), "unnamed");
    EXPECT_EQ(d.getKarma(), 0);
    EXPECT_EQ(d.getTransformation(), "");
}

TEST(DinoTest, 2)
{
    Weapon w("Cannon", 30, 70);
    Dinosaur d("Dino", 60, 90, 80, w, -100);
    EXPECT_EQ(d.getName(), "Dino");
    EXPECT_EQ(d.getKarma(), -100);
    EXPECT_EQ(d.getTransformation(), "Dinosaur");
    EXPECT_EQ(d.getWeapon().getName(), "Cannon");
}

TEST(DinoTest, 3)
{
    Weapon w("Cannon", 30, 70);
    Dinosaur d("Dino", 60, 90, 80, w, -100);

    EXPECT_FALSE(d.transformBack());
    EXPECT_TRUE(d.transformtoAlt());
    EXPECT_FALSE(d.transformtoAlt());
    EXPECT_TRUE(d.transformBack());
}
