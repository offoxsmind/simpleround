#pragma once

#include "pebble.h"

static const GPathInfo MINUTE_HAND_POINTS = {
  6,
    (GPoint []){
      { 1, -56 },
      { 3, -56 },
      { 3, -90 },
      {-3, -90 },
      {-3, -56 },
      {-1, -56 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  6,
    (GPoint []){
      { 2, -56 },
      { 6, -56 },
      { 6, -90 },
      {-6, -90 },
      {-6, -56 },
      {-2, -56 }
      
  }
};






