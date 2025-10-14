#ifndef _com_sun_beans_finder_InstanceFinder_h_
#define _com_sun_beans_finder_InstanceFinder_h_
//$ class com.sun.beans.finder.InstanceFinder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class InstanceFinder : public ::java::lang::Object {
	$class(InstanceFinder, 0, ::java::lang::Object)
public:
	InstanceFinder();
	void init$($Class* type, bool allow, $String* suffix, $StringArray* packages);
	virtual $Object* find($Class* type);
	virtual $StringArray* getPackages();
	virtual $Object* instantiate($Class* type, $String* name);
	virtual $Object* instantiate($Class* type, $String* prefix, $String* name);
	virtual void setPackages($StringArray* packages);
	static $StringArray* EMPTY;
	$Class* type = nullptr;
	bool allow = false;
	$String* suffix = nullptr;
	$volatile($StringArray*) packages = nullptr;
};

			} // finder
		} // beans
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_beans_finder_InstanceFinder_h_