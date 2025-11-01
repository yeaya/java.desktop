#ifndef _javax_swing_text_GapContent_h_
#define _javax_swing_text_GapContent_h_
//$ class javax.swing.text.GapContent
//$ extends javax.swing.text.GapVector
//$ implements javax.swing.text.AbstractDocument$Content

#include <java/lang/Array.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/GapVector.h>

#pragma push_macro("GROWTH_SIZE")
#undef GROWTH_SIZE

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class GapContent$MarkData;
			class GapContent$MarkVector;
			class Position;
			class Segment;
		}
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class UndoableEdit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export GapContent : public ::javax::swing::text::GapVector, public ::javax::swing::text::AbstractDocument$Content {
	$class(GapContent, 0, ::javax::swing::text::GapVector, ::javax::swing::text::AbstractDocument$Content)
public:
	GapContent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t initialLength);
	virtual $Object* allocateArray(int32_t len) override;
	int32_t compare(::javax::swing::text::GapContent$MarkData* o1, ::javax::swing::text::GapContent$MarkData* o2);
	virtual ::javax::swing::text::Position* createPosition(int32_t offset) override;
	int32_t findMarkAdjustIndex(int32_t searchIndex);
	int32_t findSortIndex(::javax::swing::text::GapContent$MarkData* o);
	virtual int32_t getArrayLength() override;
	virtual void getChars(int32_t where, int32_t len, ::javax::swing::text::Segment* chars) override;
	virtual int32_t getNewArraySize(int32_t reqSize) override;
	virtual ::java::util::Vector* getPositionsInRange(::java::util::Vector* v, int32_t offset, int32_t length);
	virtual $String* getString(int32_t where, int32_t len) override;
	virtual ::javax::swing::undo::UndoableEdit* insertString(int32_t where, $String* str) override;
	virtual int32_t length() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::javax::swing::undo::UndoableEdit* remove(int32_t where, int32_t nitems) override;
	void removeUnusedMarks();
	virtual void resetMarksAtZero();
	virtual void resize(int32_t nsize) override;
	virtual void shiftEnd(int32_t newSize) override;
	virtual void shiftGap(int32_t newGapStart) override;
	virtual void shiftGapEndUp(int32_t newGapEnd) override;
	virtual void shiftGapStartDown(int32_t newGapStart) override;
	virtual $String* toString() override;
	virtual void updateUndoPositions(::java::util::Vector* positions, int32_t offset, int32_t length);
	static $chars* empty;
	::javax::swing::text::GapContent$MarkVector* marks = nullptr;
	::javax::swing::text::GapContent$MarkData* search = nullptr;
	int32_t unusedMarks = 0;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	static const int32_t GROWTH_SIZE = 524288; // 1024 * 512
};

		} // text
	} // swing
} // javax

#pragma pop_macro("GROWTH_SIZE")

#endif // _javax_swing_text_GapContent_h_