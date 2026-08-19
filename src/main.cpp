#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(PlayerObject) {
    void update(float dt) {
        // Retrieve the custom Pi value set by the user in settings
        double customPi = Mod::get()->getSettingValue<double>("pi-value");

        PlayerObject::update(dt);
    }
};
