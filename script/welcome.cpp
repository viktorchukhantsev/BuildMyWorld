#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WelcomeWorldPlugin : public WorldPlugin
  {
    public: WelcomeWorldPlugin() : WorldPlugin()
            {
              printf("Welcome to Viktor's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WelcomeWorldPlugin)
}