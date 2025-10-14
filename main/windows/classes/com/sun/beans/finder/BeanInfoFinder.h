#ifndef _com_sun_beans_finder_BeanInfoFinder_h_
#define _com_sun_beans_finder_BeanInfoFinder_h_
//$ class com.sun.beans.finder.BeanInfoFinder
//$ extends com.sun.beans.finder.InstanceFinder

#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DEFAULT_NEW")
#undef DEFAULT_NEW

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class BeanInfoFinder : public ::com::sun::beans::finder::InstanceFinder {
	$class(BeanInfoFinder, 0, ::com::sun::beans::finder::InstanceFinder)
public:
	BeanInfoFinder();
	void init$();
	virtual $Object* find($Class* type) override;
	virtual $StringArray* getPackages() override;
	using ::com::sun::beans::finder::InstanceFinder::instantiate;
	virtual $Object* instantiate($Class* type, $String* prefix, $String* name) override;
	static bool isValid($Class* type, ::java::lang::reflect::Method* method);
	virtual void setPackages($StringArray* packages) override;
	static $String* DEFAULT;
	static $String* DEFAULT_NEW;
};

			} // finder
		} // beans
	} // sun
} // com

#pragma pop_macro("DEFAULT")
#pragma pop_macro("DEFAULT_NEW")

#endif // _com_sun_beans_finder_BeanInfoFinder_h_