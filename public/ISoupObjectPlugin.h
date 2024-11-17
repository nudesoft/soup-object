#ifndef ISOUPOBJECTPLUGIN_H
#define ISOUPOBJECTPLUGIN_H

#include <ISmmPlugin.h>
#include <ISoupObject.h>

namespace soup {

class ISoupObjectPlugin : public ISmmPlugin, public IMetamodListener {

public:
    virtual const ISoupObject* object() const =0;
};

} // soup

#endif //ISOUPOBJECTPLUGIN_H
