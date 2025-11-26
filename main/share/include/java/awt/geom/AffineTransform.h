#ifndef _java_awt_geom_AffineTransform_h_
#define _java_awt_geom_AffineTransform_h_
//$ class java.awt.geom.AffineTransform
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("APPLY_IDENTITY")
#undef APPLY_IDENTITY
#pragma push_macro("APPLY_SCALE")
#undef APPLY_SCALE
#pragma push_macro("APPLY_SHEAR")
#undef APPLY_SHEAR
#pragma push_macro("APPLY_TRANSLATE")
#undef APPLY_TRANSLATE
#pragma push_macro("HI_IDENTITY")
#undef HI_IDENTITY
#pragma push_macro("HI_SCALE")
#undef HI_SCALE
#pragma push_macro("HI_SHEAR")
#undef HI_SHEAR
#pragma push_macro("HI_SHIFT")
#undef HI_SHIFT
#pragma push_macro("HI_TRANSLATE")
#undef HI_TRANSLATE
#pragma push_macro("TYPE_FLIP")
#undef TYPE_FLIP
#pragma push_macro("TYPE_GENERAL_ROTATION")
#undef TYPE_GENERAL_ROTATION
#pragma push_macro("TYPE_GENERAL_SCALE")
#undef TYPE_GENERAL_SCALE
#pragma push_macro("TYPE_GENERAL_TRANSFORM")
#undef TYPE_GENERAL_TRANSFORM
#pragma push_macro("TYPE_IDENTITY")
#undef TYPE_IDENTITY
#pragma push_macro("TYPE_MASK_ROTATION")
#undef TYPE_MASK_ROTATION
#pragma push_macro("TYPE_MASK_SCALE")
#undef TYPE_MASK_SCALE
#pragma push_macro("TYPE_QUADRANT_ROTATION")
#undef TYPE_QUADRANT_ROTATION
#pragma push_macro("TYPE_TRANSLATION")
#undef TYPE_TRANSLATION
#pragma push_macro("TYPE_UNIFORM_SCALE")
#undef TYPE_UNIFORM_SCALE
#pragma push_macro("TYPE_UNKNOWN")
#undef TYPE_UNKNOWN

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import AffineTransform : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(AffineTransform, 0, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	AffineTransform();
	virtual void finalize() override;
	void init$(double m00, double m10, double m01, double m11, double m02, double m12, int32_t state);
	void init$();
	void init$(::java::awt::geom::AffineTransform* Tx);
	void init$(float m00, float m10, float m01, float m11, float m02, float m12);
	void init$($floats* flatmatrix);
	void init$(double m00, double m10, double m01, double m11, double m02, double m12);
	void init$($doubles* flatmatrix);
	static double _matround(double matval);
	void calculateType();
	virtual $Object* clone() override;
	virtual void concatenate(::java::awt::geom::AffineTransform* Tx);
	virtual ::java::awt::geom::AffineTransform* createInverse();
	virtual ::java::awt::Shape* createTransformedShape(::java::awt::Shape* pSrc);
	virtual ::java::awt::geom::Point2D* deltaTransform(::java::awt::geom::Point2D* ptSrc, ::java::awt::geom::Point2D* ptDst);
	virtual void deltaTransform($doubles* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts);
	virtual bool equals(Object$* obj) override;
	virtual double getDeterminant();
	virtual void getMatrix($doubles* flatmatrix);
	static ::java::awt::geom::AffineTransform* getQuadrantRotateInstance(int32_t numquadrants);
	static ::java::awt::geom::AffineTransform* getQuadrantRotateInstance(int32_t numquadrants, double anchorx, double anchory);
	static ::java::awt::geom::AffineTransform* getRotateInstance(double theta);
	static ::java::awt::geom::AffineTransform* getRotateInstance(double theta, double anchorx, double anchory);
	static ::java::awt::geom::AffineTransform* getRotateInstance(double vecx, double vecy);
	static ::java::awt::geom::AffineTransform* getRotateInstance(double vecx, double vecy, double anchorx, double anchory);
	static ::java::awt::geom::AffineTransform* getScaleInstance(double sx, double sy);
	virtual double getScaleX();
	virtual double getScaleY();
	static ::java::awt::geom::AffineTransform* getShearInstance(double shx, double shy);
	virtual double getShearX();
	virtual double getShearY();
	static ::java::awt::geom::AffineTransform* getTranslateInstance(double tx, double ty);
	virtual double getTranslateX();
	virtual double getTranslateY();
	virtual int32_t getType();
	virtual int32_t hashCode() override;
	virtual ::java::awt::geom::Point2D* inverseTransform(::java::awt::geom::Point2D* ptSrc, ::java::awt::geom::Point2D* ptDst);
	virtual void inverseTransform($doubles* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts);
	virtual void invert();
	virtual bool isIdentity();
	virtual void preConcatenate(::java::awt::geom::AffineTransform* Tx);
	virtual void quadrantRotate(int32_t numquadrants);
	virtual void quadrantRotate(int32_t numquadrants, double anchorx, double anchory);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void rotate(double theta);
	virtual void rotate(double theta, double anchorx, double anchory);
	virtual void rotate(double vecx, double vecy);
	virtual void rotate(double vecx, double vecy, double anchorx, double anchory);
	void rotate180();
	void rotate270();
	void rotate90();
	virtual void scale(double sx, double sy);
	virtual void setToIdentity();
	virtual void setToQuadrantRotation(int32_t numquadrants);
	virtual void setToQuadrantRotation(int32_t numquadrants, double anchorx, double anchory);
	virtual void setToRotation(double theta);
	virtual void setToRotation(double theta, double anchorx, double anchory);
	virtual void setToRotation(double vecx, double vecy);
	virtual void setToRotation(double vecx, double vecy, double anchorx, double anchory);
	virtual void setToScale(double sx, double sy);
	virtual void setToShear(double shx, double shy);
	virtual void setToTranslation(double tx, double ty);
	virtual void setTransform(::java::awt::geom::AffineTransform* Tx);
	virtual void setTransform(double m00, double m10, double m01, double m11, double m02, double m12);
	virtual void shear(double shx, double shy);
	void stateError();
	virtual $String* toString() override;
	virtual ::java::awt::geom::Point2D* transform(::java::awt::geom::Point2D* ptSrc, ::java::awt::geom::Point2D* ptDst);
	virtual void transform($Array<::java::awt::geom::Point2D>* ptSrc, int32_t srcOff, $Array<::java::awt::geom::Point2D>* ptDst, int32_t dstOff, int32_t numPts);
	virtual void transform($floats* srcPts, int32_t srcOff, $floats* dstPts, int32_t dstOff, int32_t numPts);
	virtual void transform($doubles* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts);
	virtual void transform($floats* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts);
	virtual void transform($doubles* srcPts, int32_t srcOff, $floats* dstPts, int32_t dstOff, int32_t numPts);
	virtual void translate(double tx, double ty);
	virtual void updateState();
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t TYPE_UNKNOWN = (-1);
	static const int32_t TYPE_IDENTITY = 0;
	static const int32_t TYPE_TRANSLATION = 1;
	static const int32_t TYPE_UNIFORM_SCALE = 2;
	static const int32_t TYPE_GENERAL_SCALE = 4;
	static const int32_t TYPE_MASK_SCALE = (TYPE_UNIFORM_SCALE | TYPE_GENERAL_SCALE);
	static const int32_t TYPE_FLIP = 64;
	static const int32_t TYPE_QUADRANT_ROTATION = 8;
	static const int32_t TYPE_GENERAL_ROTATION = 16;
	static const int32_t TYPE_MASK_ROTATION = (TYPE_QUADRANT_ROTATION | TYPE_GENERAL_ROTATION);
	static const int32_t TYPE_GENERAL_TRANSFORM = 32;
	static const int32_t APPLY_IDENTITY = 0;
	static const int32_t APPLY_TRANSLATE = 1;
	static const int32_t APPLY_SCALE = 2;
	static const int32_t APPLY_SHEAR = 4;
	static const int32_t HI_SHIFT = 3;
	static const int32_t HI_IDENTITY = 0; // APPLY_IDENTITY << HI_SHIFT
	static const int32_t HI_TRANSLATE = 8; // APPLY_TRANSLATE << HI_SHIFT
	static const int32_t HI_SCALE = 16; // APPLY_SCALE << HI_SHIFT
	static const int32_t HI_SHEAR = 32; // APPLY_SHEAR << HI_SHIFT
	double m00 = 0.0;
	double m10 = 0.0;
	double m01 = 0.0;
	double m11 = 0.0;
	double m02 = 0.0;
	double m12 = 0.0;
	int32_t state = 0;
	int32_t type = 0;
	static $ints* rot90conversion;
	static const int64_t serialVersionUID = (int64_t)0x127891154AD5FF62;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("APPLY_IDENTITY")
#pragma pop_macro("APPLY_SCALE")
#pragma pop_macro("APPLY_SHEAR")
#pragma pop_macro("APPLY_TRANSLATE")
#pragma pop_macro("HI_IDENTITY")
#pragma pop_macro("HI_SCALE")
#pragma pop_macro("HI_SHEAR")
#pragma pop_macro("HI_SHIFT")
#pragma pop_macro("HI_TRANSLATE")
#pragma pop_macro("TYPE_FLIP")
#pragma pop_macro("TYPE_GENERAL_ROTATION")
#pragma pop_macro("TYPE_GENERAL_SCALE")
#pragma pop_macro("TYPE_GENERAL_TRANSFORM")
#pragma pop_macro("TYPE_IDENTITY")
#pragma pop_macro("TYPE_MASK_ROTATION")
#pragma pop_macro("TYPE_MASK_SCALE")
#pragma pop_macro("TYPE_QUADRANT_ROTATION")
#pragma pop_macro("TYPE_TRANSLATION")
#pragma pop_macro("TYPE_UNIFORM_SCALE")
#pragma pop_macro("TYPE_UNKNOWN")

#endif // _java_awt_geom_AffineTransform_h_