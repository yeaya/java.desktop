#ifndef _sun_awt_FontConfiguration$PropertiesHandler$FontProperties_h_
#define _sun_awt_FontConfiguration$PropertiesHandler$FontProperties_h_
//$ class sun.awt.FontConfiguration$PropertiesHandler$FontProperties
//$ extends java.util.Properties

#include <java/util/Properties.h>

namespace sun {
	namespace awt {
		class FontConfiguration$PropertiesHandler;
	}
}

namespace sun {
	namespace awt {

class $export FontConfiguration$PropertiesHandler$FontProperties : public ::java::util::Properties {
	$class(FontConfiguration$PropertiesHandler$FontProperties, $NO_CLASS_INIT, ::java::util::Properties)
public:
	FontConfiguration$PropertiesHandler$FontProperties();
	void init$(::sun::awt::FontConfiguration$PropertiesHandler* this$0);
	virtual $Object* put(Object$* k, Object$* v) override;
	::sun::awt::FontConfiguration$PropertiesHandler* this$0 = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_FontConfiguration$PropertiesHandler$FontProperties_h_