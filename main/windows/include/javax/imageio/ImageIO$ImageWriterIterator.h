#ifndef _javax_imageio_ImageIO$ImageWriterIterator_h_
#define _javax_imageio_ImageIO$ImageWriterIterator_h_
//$ class javax.imageio.ImageIO$ImageWriterIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace javax {
	namespace imageio {

class $import ImageIO$ImageWriterIterator : public ::java::util::Iterator {
	$class(ImageIO$ImageWriterIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImageIO$ImageWriterIterator();
	void init$(::java::util::Iterator* iter);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* iter = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$ImageWriterIterator_h_