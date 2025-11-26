#ifndef _java_awt_image_renderable_ParameterBlock_h_
#define _java_awt_image_renderable_ParameterBlock_h_
//$ class java.awt.image.renderable.ParameterBlock
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace image {
			class RenderedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			namespace renderable {
				class RenderableImage;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

class $export ParameterBlock : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(ParameterBlock, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	ParameterBlock();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Vector* sources);
	void init$(::java::util::Vector* sources, ::java::util::Vector* parameters);
	virtual ::java::awt::image::renderable::ParameterBlock* add(Object$* obj);
	virtual ::java::awt::image::renderable::ParameterBlock* add(int8_t b);
	virtual ::java::awt::image::renderable::ParameterBlock* add(char16_t c);
	virtual ::java::awt::image::renderable::ParameterBlock* add(int16_t s);
	virtual ::java::awt::image::renderable::ParameterBlock* add(int32_t i);
	virtual ::java::awt::image::renderable::ParameterBlock* add(int64_t l);
	virtual ::java::awt::image::renderable::ParameterBlock* add(float f);
	virtual ::java::awt::image::renderable::ParameterBlock* add(double d);
	virtual ::java::awt::image::renderable::ParameterBlock* addSource(Object$* source);
	virtual $Object* clone() override;
	virtual int8_t getByteParameter(int32_t index);
	virtual char16_t getCharParameter(int32_t index);
	virtual double getDoubleParameter(int32_t index);
	virtual float getFloatParameter(int32_t index);
	virtual int32_t getIntParameter(int32_t index);
	virtual int64_t getLongParameter(int32_t index);
	virtual int32_t getNumParameters();
	virtual int32_t getNumSources();
	virtual $Object* getObjectParameter(int32_t index);
	virtual $ClassArray* getParamClasses();
	virtual ::java::util::Vector* getParameters();
	virtual ::java::awt::image::renderable::RenderableImage* getRenderableSource(int32_t index);
	virtual ::java::awt::image::RenderedImage* getRenderedSource(int32_t index);
	virtual int16_t getShortParameter(int32_t index);
	virtual $Object* getSource(int32_t index);
	virtual ::java::util::Vector* getSources();
	virtual void removeParameters();
	virtual void removeSources();
	virtual ::java::awt::image::renderable::ParameterBlock* set(Object$* obj, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(int8_t b, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(char16_t c, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(int16_t s, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(int32_t i, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(int64_t l, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(float f, int32_t index);
	virtual ::java::awt::image::renderable::ParameterBlock* set(double d, int32_t index);
	virtual void setParameters(::java::util::Vector* parameters);
	virtual ::java::awt::image::renderable::ParameterBlock* setSource(Object$* source, int32_t index);
	virtual void setSources(::java::util::Vector* sources);
	virtual $Object* shallowClone();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x96D8AD8D09C0B752;
	::java::util::Vector* sources = nullptr;
	::java::util::Vector* parameters = nullptr;
};

			} // renderable
		} // image
	} // awt
} // java

#endif // _java_awt_image_renderable_ParameterBlock_h_