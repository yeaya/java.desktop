#ifndef _javax_swing_text_StringContent_h_
#define _javax_swing_text_StringContent_h_
//$ class javax.swing.text.StringContent
//$ extends javax.swing.text.AbstractDocument$Content
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/text/AbstractDocument$Content.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
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

class $export StringContent : public ::javax::swing::text::AbstractDocument$Content, public ::java::io::Serializable {
	$class(StringContent, 0, ::javax::swing::text::AbstractDocument$Content, ::java::io::Serializable)
public:
	StringContent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t initialLength);
	virtual ::javax::swing::text::Position* createPosition(int32_t offset) override;
	virtual void getChars(int32_t where, int32_t len, ::javax::swing::text::Segment* chars) override;
	::java::util::Vector* getPositionsInRange(::java::util::Vector* v, int32_t offset, int32_t length);
	virtual $String* getString(int32_t where, int32_t len) override;
	virtual ::javax::swing::undo::UndoableEdit* insertString(int32_t where, $String* str) override;
	virtual int32_t length() override;
	virtual ::javax::swing::undo::UndoableEdit* remove(int32_t where, int32_t nitems) override;
	void replace(int32_t offset, int32_t length, $chars* replArray, int32_t replOffset, int32_t replLength);
	void resize(int32_t ncount);
	virtual $String* toString() override;
	void updateMarksForInsert(int32_t offset, int32_t length);
	void updateMarksForRemove(int32_t offset, int32_t length);
	void updateUndoPositions(::java::util::Vector* positions);
	static $chars* empty;
	$chars* data = nullptr;
	int32_t count = 0;
	::java::util::Vector* marks = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StringContent_h_