#ifndef _javax_imageio_spi_PartialOrderIterator_h_
#define _javax_imageio_spi_PartialOrderIterator_h_
//$ class javax.imageio.spi.PartialOrderIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class LinkedList;
		class Map;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class PartialOrderIterator : public ::java::util::Iterator {
	$class(PartialOrderIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PartialOrderIterator();
	void init$(::java::util::Iterator* iter);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::LinkedList* zeroList = nullptr;
	::java::util::Map* inDegrees = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_PartialOrderIterator_h_