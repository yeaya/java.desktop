#ifndef _javax_imageio_ImageIO$ImageReaderIterator_h_
#define _javax_imageio_ImageIO$ImageReaderIterator_h_
//$ class javax.imageio.ImageIO$ImageReaderIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace javax {
	namespace imageio {

class $export ImageIO$ImageReaderIterator : public ::java::util::Iterator {
	$class(ImageIO$ImageReaderIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImageIO$ImageReaderIterator();
	void init$(::java::util::Iterator* iter);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* iter = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$ImageReaderIterator_h_