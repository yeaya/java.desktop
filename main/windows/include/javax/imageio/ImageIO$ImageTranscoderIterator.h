#ifndef _javax_imageio_ImageIO$ImageTranscoderIterator_h_
#define _javax_imageio_ImageIO$ImageTranscoderIterator_h_
//$ class javax.imageio.ImageIO$ImageTranscoderIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace javax {
	namespace imageio {

class $import ImageIO$ImageTranscoderIterator : public ::java::util::Iterator {
	$class(ImageIO$ImageTranscoderIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImageIO$ImageTranscoderIterator();
	void init$(::java::util::Iterator* iter);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* iter = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$ImageTranscoderIterator_h_