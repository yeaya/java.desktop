#ifndef _sun_swing_BakedArrayList_h_
#define _sun_swing_BakedArrayList_h_
//$ class sun.swing.BakedArrayList
//$ extends java.util.ArrayList

#include <java/util/ArrayList.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace swing {

class $export BakedArrayList : public ::java::util::ArrayList {
	$class(BakedArrayList, $NO_CLASS_INIT, ::java::util::ArrayList)
public:
	BakedArrayList();
	void init$(int32_t size);
	void init$(::java::util::List* data);
	virtual void cacheHashCode();
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	using ::java::util::ArrayList::toArray;
	int32_t _hashCode = 0;
};

	} // swing
} // sun

#endif // _sun_swing_BakedArrayList_h_