#ifndef SOUP_OBJECT_LIBRARY_H
#define SOUP_OBJECT_LIBRARY_H

#include <public/ISoupObjectPlugin.h>

#include <src/SoupObject.h>

#define PLUGIN_AUTHOR "rejchev"
#define PLUGIN_NAME "soup-object"
#define PLUGIN_DESC ""
#define PLUGIN_URL  "https://"
#define PLUGIN_LICENSE "MIT"
#define PLUGIN_VERSION "0.0.1"
#define PLUGIN_TAG "[soup-obj]"

namespace soup {

    class SoupObjectPlugin final : public ISoupObjectPlugin {

    public:
        bool Load(PluginId id, ISmmAPI *ismm, char *error, size_t maxlength, bool late) override;
        bool Unload(char *error, size_t maxlen) override;
        bool Pause(char *error, size_t maxlen) override;
        bool Unpause(char *error, size_t maxlen) override;
        void AllPluginsLoaded() override;

    public:
        const char *GetAuthor() override;
        const char *GetName() override;
        const char *GetDescription() override;
        const char *GetURL() override;
        const char *GetLicense() override;
        const char *GetVersion() override;
        const char *GetDate() override;
        const char *GetLogTag() override;

    public:
        const ISoupObject* object() const override;

    private:
        SoupObject m_soupObject;
    };

}

extern soup::SoupObjectPlugin g_soupObject;

#endif //SOUP_OBJECT_LIBRARY_H
