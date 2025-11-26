#ifndef _javax_print_attribute_standard_MediaSize_h_
#define _javax_print_attribute_standard_MediaSize_h_
//$ class javax.print.attribute.standard.MediaSize
//$ extends javax.print.attribute.Size2DSyntax
//$ implements javax.print.attribute.Attribute

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/Size2DSyntax.h>

namespace java {
	namespace util {
		class HashMap;
		class Vector;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class MediaSizeName;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import MediaSize : public ::javax::print::attribute::Size2DSyntax, public ::javax::print::attribute::Attribute {
	$class(MediaSize, 0, ::javax::print::attribute::Size2DSyntax, ::javax::print::attribute::Attribute)
public:
	MediaSize();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(float x, float y, int32_t units);
	void init$(int32_t x, int32_t y, int32_t units);
	void init$(float x, float y, int32_t units, ::javax::print::attribute::standard::MediaSizeName* media);
	void init$(int32_t x, int32_t y, int32_t units, ::javax::print::attribute::standard::MediaSizeName* media);
	virtual bool equals(Object$* object) override;
	static ::javax::print::attribute::standard::MediaSizeName* findMedia(float x, float y, int32_t units);
	virtual $Class* getCategory() override;
	static ::javax::print::attribute::standard::MediaSize* getMediaSizeForName(::javax::print::attribute::standard::MediaSizeName* media);
	virtual ::javax::print::attribute::standard::MediaSizeName* getMediaSizeName();
	virtual $String* getName() override;
	using ::javax::print::attribute::Size2DSyntax::toString;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xE4B068056EF2340D;
	::javax::print::attribute::standard::MediaSizeName* mediaName = nullptr;
	static ::java::util::HashMap* mediaMap;
	static ::java::util::Vector* sizeVector;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_MediaSize_h_