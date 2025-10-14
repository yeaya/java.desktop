#ifndef _javax_swing_text_DefaultStyledDocument$ElementSpec_h_
#define _javax_swing_text_DefaultStyledDocument$ElementSpec_h_
//$ class javax.swing.text.DefaultStyledDocument$ElementSpec
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultStyledDocument$ElementSpec : public ::java::lang::Object {
	$class(DefaultStyledDocument$ElementSpec, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultStyledDocument$ElementSpec();
	void init$(::javax::swing::text::AttributeSet* a, int16_t type);
	void init$(::javax::swing::text::AttributeSet* a, int16_t type, int32_t len);
	void init$(::javax::swing::text::AttributeSet* a, int16_t type, $chars* txt, int32_t offs, int32_t len);
	virtual $chars* getArray();
	virtual ::javax::swing::text::AttributeSet* getAttributes();
	virtual int16_t getDirection();
	virtual int32_t getLength();
	virtual int32_t getOffset();
	virtual int16_t getType();
	virtual void setDirection(int16_t direction);
	virtual void setType(int16_t type);
	virtual $String* toString() override;
	static const int16_t StartTagType = 1;
	static const int16_t EndTagType = 2;
	static const int16_t ContentType = 3;
	static const int16_t JoinPreviousDirection = 4;
	static const int16_t JoinNextDirection = 5;
	static const int16_t OriginateDirection = 6;
	static const int16_t JoinFractureDirection = 7;
	::javax::swing::text::AttributeSet* attr = nullptr;
	int32_t len = 0;
	int16_t type = 0;
	int16_t direction = 0;
	int32_t offs = 0;
	$chars* data = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$ElementSpec_h_