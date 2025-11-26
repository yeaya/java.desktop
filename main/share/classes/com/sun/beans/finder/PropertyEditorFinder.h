#ifndef _com_sun_beans_finder_PropertyEditorFinder_h_
#define _com_sun_beans_finder_PropertyEditorFinder_h_
//$ class com.sun.beans.finder.PropertyEditorFinder
//$ extends com.sun.beans.finder.InstanceFinder

#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DEFAULT_NEW")
#undef DEFAULT_NEW

namespace com {
	namespace sun {
		namespace beans {
			class WeakCache;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class PropertyEditorFinder : public ::com::sun::beans::finder::InstanceFinder {
	$class(PropertyEditorFinder, 0, ::com::sun::beans::finder::InstanceFinder)
public:
	PropertyEditorFinder();
	void init$();
	virtual $Object* find($Class* type) override;
	virtual $StringArray* getPackages() override;
	using ::com::sun::beans::finder::InstanceFinder::instantiate;
	virtual $Object* instantiate($Class* type, $String* prefix, $String* name) override;
	void register$($Class* type, $Class* editor);
	virtual void setPackages($StringArray* packages) override;
	static $String* DEFAULT;
	static $String* DEFAULT_NEW;
	::com::sun::beans::WeakCache* registry = nullptr;
};

			} // finder
		} // beans
	} // sun
} // com

#pragma pop_macro("DEFAULT")
#pragma pop_macro("DEFAULT_NEW")

#endif // _com_sun_beans_finder_PropertyEditorFinder_h_