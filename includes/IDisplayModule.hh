#pragma once

#include <utility>
#include <list>
#include <string>
#include "Game.hh"

class IDisplayModule
{
public:

  typedef std::list<game::position>	pos_list;
  typedef game::position 		pos;

  virtual ~IDisplayModule() {}
  virtual std::string const &	getName() const = 0;
  virtual bool			init(int x, int y) = 0;
  virtual game::keys		play() = 0;
  virtual void                  refresh(const pos_list &snake, const pos &fruit, const pos_list &walls, int eaten_fruits, game::direction dir) = 0;
  virtual void			pause() = 0;
  virtual int                   dispScore(int eaten_fruits) = 0;
  virtual int			end_screen() = 0;
  virtual bool			stop() = 0;

  virtual int			getX() const = 0;
  virtual int			getY() const = 0;
};
