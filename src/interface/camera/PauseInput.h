/*======================================================================

MAVCONN mcvlib - The Micro Computer Vision Library
Please see our website at <http://MAVCONN.ethz.ch>

Original Authors:
  Fabian Landau
Contributing Authors (in alphabetical order):

Todo:

(c) 2009 MAVCONN PROJECT  <http://MAVCONN.ethz.ch>

This file is part of the MAVCONN project

    mcvlib is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    mcvlib is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with mcvlib. If not, see <http://www.gnu.org/licenses/>.

========================================================================*/

#ifndef _PauseInput_H__
#define _PauseInput_H__

#include "CameraOperations.h"
#include "FPSTimer.h"

namespace MAVCONN
{
    class PauseInput : public InputOperation
    {
        public:
            PauseInput(Camera* camera, IplImage* image);
            ~PauseInput();

            void startPlayback() {}
            void tick();

        private:
            IplImage*   image_;
            FPSTimer    timer_;
    };
}

#endif /* _PauseInput_H__ */
