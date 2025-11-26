#ifndef _sun_font_AttributeMap_h_
#define _sun_font_AttributeMap_h_
//$ class sun.font.AttributeMap
//$ extends java.util.AbstractMap

#include <java/util/AbstractMap.h>

namespace java {
	namespace awt {
		namespace font {
			class TextAttribute;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace sun {
	namespace font {
		class AttributeValues;
	}
}

namespace sun {
	namespace font {

class AttributeMap : public ::java::util::AbstractMap {
	$class(AttributeMap, 0, ::java::util::AbstractMap)
public:
	AttributeMap();
	void init$(::sun::font::AttributeValues* values);
	::java::util::Map* delegate();
	virtual ::java::util::Set* entrySet() override;
	::sun::font::AttributeValues* getValues();
	$Object* put(::java::awt::font::TextAttribute* key, Object$* value);
	virtual $Object* put(Object$* key, Object$* value) override;
	using ::java::util::AbstractMap::remove;
	virtual $String* toString() override;
	::sun::font::AttributeValues* values$ = nullptr;
	::java::util::Map* delegateMap = nullptr;
	static bool first;
};

	} // font
} // sun

#endif // _sun_font_AttributeMap_h_