#include "extension.h"

soup::SoupObjectPlugin g_soupObject;

PLUGIN_EXPOSE(soup::SoupObjectPlugin, g_soupObject)
bool soup::SoupObjectPlugin::Load(PluginId id, ISmmAPI *ismm, char *error, size_t maxlength, bool late) {

    m_soupObject = {};

    return true;
}

bool soup::SoupObjectPlugin::Unload(char *error, size_t maxlen) {


    return true;
}

bool soup::SoupObjectPlugin::Pause(char *error, size_t maxlen) {
    return ISmmPlugin::Pause(error, maxlen);
}

bool soup::SoupObjectPlugin::Unpause(char *error, size_t maxlen) {
    return ISmmPlugin::Unpause(error, maxlen);
}

const soup::ISoupObject * soup::SoupObjectPlugin::object() const {
    return &m_soupObject;
}

void soup::SoupObjectPlugin::AllPluginsLoaded() {
    ISmmPlugin::AllPluginsLoaded();
}

const char * soup::SoupObjectPlugin::GetAuthor() {
    return PLUGIN_AUTHOR;
}

const char * soup::SoupObjectPlugin::GetName() {
    return PLUGIN_NAME;
}

const char * soup::SoupObjectPlugin::GetDescription() {
    return PLUGIN_DESC;
}

const char * soup::SoupObjectPlugin::GetURL() {
    return PLUGIN_URL;
}

const char * soup::SoupObjectPlugin::GetLicense() {
    return PLUGIN_LICENSE;
}

const char * soup::SoupObjectPlugin::GetVersion() {
    return PLUGIN_VERSION;
}

const char * soup::SoupObjectPlugin::GetDate() {
    return ISmmPlugin::GetDate();
}

const char * soup::SoupObjectPlugin::GetLogTag() {
    return PLUGIN_TAG;
}

