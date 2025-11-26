#ifndef _javax_imageio_spi_FilterIterator_h_
#define _javax_imageio_spi_FilterIterator_h_
//$ class javax.imageio.spi.FilterIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace javax {
	namespace imageio {
		namespace spi {
			class ServiceRegistry$Filter;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class FilterIterator : public ::java::util::Iterator {
	$class(FilterIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	FilterIterator();
	void init$(::java::util::Iterator* iter, ::javax::imageio::spi::ServiceRegistry$Filter* filter);
	void advance();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* iter = nullptr;
	::javax::imageio::spi::ServiceRegistry$Filter* filter = nullptr;
	$Object* next$ = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_FilterIterator_h_