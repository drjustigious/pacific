#ifndef PACIFIC_CONFIG_HPP
#define PACIFIC_CONFIG_HPP

#include <string>

namespace PacificConfig {

const unsigned int FRAME_RATE = 60;

const double WINDOW_ASPECT_RATIO = 9.0/16.0;
const unsigned int INITIAL_WINDOW_WIDTH = 640;
const unsigned int INITIAL_WINDOW_HEIGHT = (int)(INITIAL_WINDOW_WIDTH*WINDOW_ASPECT_RATIO);

const unsigned int MINIMUM_WINDOW_WIDTH = INITIAL_WINDOW_WIDTH;
const unsigned int MINIMUM_WINDOW_HEIGHT = INITIAL_WINDOW_HEIGHT;

const std::string VERSION_STRING = "v0.0.1";
const std::string TITLE_STRING = "Pacific Airdrops " + VERSION_STRING;

} // namespace PacificConfig

#endif /* PACIFIC_CONFIG_HPP */
