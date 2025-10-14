#ifndef _sun_awt_im_InputMethodContext_h_
#define _sun_awt_im_InputMethodContext_h_
//$ class sun.awt.im.InputMethodContext
//$ extends sun.awt.im.InputContext
//$ implements java.awt.im.spi.InputMethodContext

#include <java/awt/im/spi/InputMethodContext.h>
#include <java/lang/Array.h>
#include <sun/awt/im/InputContext.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodRequests;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethod;
			}
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class CompositionAreaHandler;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class InputMethodContext : public ::sun::awt::im::InputContext, public ::java::awt::im::spi::InputMethodContext {
	$class(InputMethodContext, 0, ::sun::awt::im::InputContext, ::java::awt::im::spi::InputMethodContext)
public:
	InputMethodContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::text::AttributedCharacterIterator* cancelLatestCommittedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual ::javax::swing::JFrame* createInputMethodJFrame($String* title, bool attachToInputContext) override;
	virtual ::java::awt::Window* createInputMethodWindow($String* title, bool attachToInputContext) override;
	static ::java::awt::Window* createInputMethodWindow($String* title, ::sun::awt::im::InputContext* context, bool isSwing);
	virtual void dispatchCommittedText(::java::awt::Component* client, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount);
	virtual void dispatchEvent(::java::awt::AWTEvent* event) override;
	virtual void dispatchInputMethodEvent(int32_t id, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition) override;
	virtual void enableClientWindowNotification(::java::awt::im::spi::InputMethod* inputMethod, bool enable) override;
	virtual ::java::text::AttributedCharacterIterator* getCommittedText(int32_t beginIndex, int32_t endIndex, $Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual int32_t getCommittedTextLength() override;
	::sun::awt::im::CompositionAreaHandler* getCompositionAreaHandler(bool grab);
	virtual int32_t getInsertPositionOffset() override;
	virtual ::java::awt::font::TextHitInfo* getLocationOffset(int32_t x, int32_t y) override;
	::java::awt::im::InputMethodRequests* getReq();
	virtual ::java::text::AttributedCharacterIterator* getSelectedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual ::java::awt::Rectangle* getTextLocation(::java::awt::font::TextHitInfo* offset) override;
	virtual void grabCompositionArea(bool doUpdate);
	bool haveActiveClient();
	virtual bool isCompositionAreaVisible();
	virtual void releaseCompositionArea();
	virtual void setCompositionAreaUndecorated(bool undecorated);
	virtual void setCompositionAreaVisible(bool visible);
	virtual void setInputMethodSupportsBelowTheSpot(bool supported);
	virtual $String* toString() override;
	virtual bool useBelowTheSpotInput();
	bool dispatchingCommittedText = false;
	::sun::awt::im::CompositionAreaHandler* compositionAreaHandler = nullptr;
	$Object* compositionAreaHandlerLock = nullptr;
	static bool belowTheSpotInputRequested;
	bool inputMethodSupportsBelowTheSpot = false;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputMethodContext_h_