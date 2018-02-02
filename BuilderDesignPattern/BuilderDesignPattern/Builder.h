#pragma once

/* Builder is responsible for constructing the smaller parts */
class Builder
{
public:
  virtual Wheel* getWheel() = 0;
  virtual Engine* getEngine() = 0;
  virtual Body* getBody() = 0;
};


/* Concrete Builder for Jeep SUV cars */
class JeepBuilder : public Builder
{
public:
  Wheel* getWheel()
  {
    Wheel* wheel = new Wheel();
    wheel->size = 22;
    return wheel;
  }

  Engine* getEngine()
  {
    Engine* engine = new Engine();
    engine->horsepower = 400;
    return engine;
  }

  Body* getBody()
  {
    Body* body = new Body();
    body->shape = "SUV";
    return body;
  }
};

/* Concrete builder for Nissan family cars */
class NissanBuilder : public Builder
{
public:
  Wheel* getWheel()
  {
    Wheel* wheel = new Wheel();
    wheel->size = 16;
    return wheel;
  }

  Engine* getEngine()
  {
    Engine* engine = new Engine();
    engine->horsepower = 85;
    return engine;
  }

  Body* getBody()
  {
    Body* body = new Body();
    body->shape = "Hatchback";
    return body;
  }
};
