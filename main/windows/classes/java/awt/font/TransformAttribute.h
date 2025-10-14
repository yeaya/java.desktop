#ifndef _java_awt_font_TransformAttribute_h_
#define _java_awt_font_TransformAttribute_h_
//$ class java.awt.font.TransformAttribute
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("IDENTITY")
#undef IDENTITY

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export TransformAttribute : public ::java::io::Serializable {
	$class(TransformAttribute, 0, ::java::io::Serializable)
public:
	TransformAttribute();
	void init$(::java::awt::geom::AffineTransform* transform);
	virtual bool equals(Object$* rhs) override;
	::java::awt::geom::AffineTransform* getTransform();
	virtual int32_t hashCode() override;
	bool isIdentity();
	$Object* readResolve();
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::awt::geom::AffineTransform* transform = nullptr;
	static ::java::awt::font::TransformAttribute* IDENTITY;
	static const int64_t serialVersionUID = (int64_t)0x2E93C93095A9FA5A;
};

		} // font
	} // awt
} // java

#pragma pop_macro("IDENTITY")

#endif // _java_awt_font_TransformAttribute_h_