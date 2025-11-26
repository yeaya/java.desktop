#ifndef _javax_imageio_spi_PartiallyOrderedSet_h_
#define _javax_imageio_spi_PartiallyOrderedSet_h_
//$ class javax.imageio.spi.PartiallyOrderedSet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Map;
		class Set;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class PartiallyOrderedSet : public ::java::util::AbstractSet {
	$class(PartiallyOrderedSet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	PartiallyOrderedSet();
	void init$();
	virtual bool add(Object$* o) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool hasOrdering(Object$* preferred, Object$* other);
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool setOrdering(Object$* first, Object$* second);
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	virtual bool unsetOrdering(Object$* first, Object$* second);
	::java::util::Map* poNodes = nullptr;
	::java::util::Set* nodes = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_PartiallyOrderedSet_h_