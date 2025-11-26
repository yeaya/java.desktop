#ifndef _javax_swing_MultiUIDefaults$MultiUIDefaultsEnumerator_h_
#define _javax_swing_MultiUIDefaults$MultiUIDefaultsEnumerator_h_
//$ class javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}
namespace javax {
	namespace swing {
		class MultiUIDefaults$MultiUIDefaultsEnumerator$Type;
	}
}

namespace javax {
	namespace swing {

class MultiUIDefaults$MultiUIDefaultsEnumerator : public ::java::util::Enumeration {
	$class(MultiUIDefaults$MultiUIDefaultsEnumerator, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	MultiUIDefaults$MultiUIDefaultsEnumerator();
	void init$(::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type* type, ::java::util::Set* entries);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Iterator* iterator = nullptr;
	::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type* type = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_MultiUIDefaults$MultiUIDefaultsEnumerator_h_