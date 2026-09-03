#pragma once

#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

class WorldLevel : public geode::Popup<std::string const&> {
protected:
    bool setup(std::string const& value) override;

public:
    static WorldLevel* create(std::string const& text);
    static cocos2d::CCScene* scene(std::string const& text);

private:
    virtual void keyBackClicked() override;
    void updatePageWithObject(cocos2d::CCObject* page, cocos2d::CCObject* object);
    void onClose(cocos2d::CCObject* sender);
    int m_level;
};
