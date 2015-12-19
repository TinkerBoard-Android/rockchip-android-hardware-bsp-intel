/*
 * Copyright (C) 2015 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SENSOR_UTILS_HPP
#define SENSOR_UTILS_HPP

/**
 * Instantiable factory design pattern class for sensor utils
 *
 * It supports retrieving the i2c sensors bus number
 */
class SensorUtils {
  public:
    /**
     * Get sensors i2c bus number
     * @return i2c bus number
     */
    static int getI2cBusNumber();

  private:
    /*
     * Initialize static members
     */
    static void init();

    static bool initialized;
    static int i2cBusNumber;
};

#endif  // SENSOR_UTILS_HPP