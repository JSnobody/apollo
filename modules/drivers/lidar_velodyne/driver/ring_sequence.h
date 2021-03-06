/******************************************************************************
 * Modification Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/* -*- mode: C++ -*-
 *
 *  Copyright (C) 2010 Austin Robot Technology, Jack O'Quin
 *
 *  License: Modified BSD Software License Agreement
 *
 *  Id
 */

/** \file
 *
 *  Velodyne HDL-64E 3D LIDAR laser ring sequence.
 *
 *  \author Jack O'Quin
 */

#ifndef MODULES_DRIVERS_LIDAR_VELODYNE_DRIVER_RING_SEQUENCE_H_
#define MODULES_DRIVERS_LIDAR_VELODYNE_DRIVER_RING_SEQUENCE_H_

namespace apollo {
namespace drivers {
namespace lidar_velodyne {

/// number of lasers
const int N_LASERS = 64;

/// ring sequence for device laser numbers
const int LASER_SEQUENCE[N_LASERS] = {
    6,  7,  10, 11, 0,  1,  4,  5,  8,  9,  14, 15, 18, 19, 22, 23,
    12, 13, 16, 17, 20, 21, 26, 27, 30, 31, 2,  3,  24, 25, 28, 29,
    38, 39, 42, 43, 32, 33, 36, 37, 40, 41, 46, 47, 50, 51, 54, 55,
    44, 45, 48, 49, 52, 53, 58, 59, 62, 63, 34, 35, 56, 57, 60, 61};

/// convert laser number to ring sequence (inverse of LASER_SEQUENCE)
const int LASER_RING[N_LASERS] = {
    4,  5,  26, 27, 6,  7,  0,  1,  8,  9,  2,  3,  16, 17, 10, 11,
    18, 19, 12, 13, 20, 21, 14, 15, 28, 29, 22, 23, 30, 31, 24, 25,
    36, 37, 58, 59, 38, 39, 32, 33, 40, 41, 34, 35, 48, 49, 42, 43,
    50, 51, 44, 45, 52, 53, 46, 47, 60, 61, 54, 55, 62, 63, 56, 57};

}  // namespace lidar_velodyne
}  // namespace drivers
}  // namespace apollo

#endif  // MODULES_DRIVERS_LIDAR_VELODYNE_DRIVER_RING_SEQUENCE_H_
