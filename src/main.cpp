#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(PlayerObject) {
    void update(float dt) {
        // Retrieve the custom Pi value set by the user in the settings menu
        double customPi = Mod::get()->getSettingValue<double>("pi-value");

        // The reset button in Geode settings automatically reverts customPi back to 3.14159

        PlayerObject::update(dt);
    }
};

$execute {
    log::info("Custom Pi Mod loaded successfully!");
}
