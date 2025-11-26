#ifndef _com_sun_beans_util_Cache$Ref_h_
#define _com_sun_beans_util_Cache$Ref_h_
//$ interface com.sun.beans.util.Cache$Ref
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

class Cache$Ref : public ::java::lang::Object {
	$interface(Cache$Ref, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getOwner() {return nullptr;}
	virtual $Object* getReferent() {return nullptr;}
	virtual bool isStale() {return false;}
	virtual void removeOwner() {}
};

			} // util
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_util_Cache$Ref_h_