//-*-c++-*--------------------------------------------------------------------//

/*! \file Scene.h
  Contains the Scene class and related functions.
 */

//----------------------------------------------------------------------------//

#ifndef __INCLUDED_PVR_SCENE_H__
#define __INCLUDED_PVR_SCENE_H__

//----------------------------------------------------------------------------//
// Includes
//----------------------------------------------------------------------------//

// System headers

// Library headers

// Project headers

#include "pvr/Types.h"

//----------------------------------------------------------------------------//
// Namespaces
//----------------------------------------------------------------------------//

namespace pvr {
namespace Render {

//----------------------------------------------------------------------------//
// Forward declarations
//----------------------------------------------------------------------------//

class Light;
class Volume;

//----------------------------------------------------------------------------//
// Scene
//----------------------------------------------------------------------------//

/*! \class Scene
  \brief Contains the scene elements (Volume and Light instances)
 */

//----------------------------------------------------------------------------//

class Scene
{
public:
  // Typedefs
  DECLARE_SMART_PTRS(Scene);
  typedef std::vector<Util::SPtr<const Light>::type> LightVec;
  // Cloning
  Ptr clone() const
  { return Ptr(new Scene(*this)); }
  // Data members
  Util::SPtr<const Volume>::type volume;
  LightVec                       lights;
};

//----------------------------------------------------------------------------//

} // namespace Render
} // namespace pvr

//----------------------------------------------------------------------------//

#endif // Include guard

//----------------------------------------------------------------------------//