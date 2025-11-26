#ifndef _javax_swing_text_GapContent$MarkVector_h_
#define _javax_swing_text_GapContent$MarkVector_h_
//$ class javax.swing.text.GapContent$MarkVector
//$ extends javax.swing.text.GapVector

#include <java/lang/Array.h>
#include <javax/swing/text/GapVector.h>

namespace javax {
	namespace swing {
		namespace text {
			class GapContent$MarkData;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import GapContent$MarkVector : public ::javax::swing::text::GapVector {
	$class(GapContent$MarkVector, $NO_CLASS_INIT, ::javax::swing::text::GapVector)
public:
	GapContent$MarkVector();
	void init$();
	void init$(int32_t size);
	virtual void addElement(::javax::swing::text::GapContent$MarkData* m);
	virtual $Object* allocateArray(int32_t len) override;
	virtual ::javax::swing::text::GapContent$MarkData* elementAt(int32_t index);
	virtual int32_t getArrayLength() override;
	virtual void insertElementAt(::javax::swing::text::GapContent$MarkData* m, int32_t index);
	virtual void replaceRange(int32_t start, int32_t end, $ObjectArray* marks);
	virtual int32_t size();
	$Array<::javax::swing::text::GapContent$MarkData>* oneMark = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GapContent$MarkVector_h_