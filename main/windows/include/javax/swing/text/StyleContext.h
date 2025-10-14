#ifndef _javax_swing_text_StyleContext_h_
#define _javax_swing_text_StyleContext_h_
//$ class javax.swing.text.StyleContext
//$ extends java.io.Serializable
//$ implements javax.swing.text.AbstractDocument$AttributeContext

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/text/AbstractDocument$AttributeContext.h>

#pragma push_macro("DEFAULT_STYLE")
#undef DEFAULT_STYLE
#pragma push_macro("THRESHOLD")
#undef THRESHOLD

namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Map;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class MutableAttributeSet;
			class Style;
			class StyleContext$FontKey;
			class StyleContext$SmallAttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyleContext : public ::java::io::Serializable, public ::javax::swing::text::AbstractDocument$AttributeContext {
	$class(StyleContext, 0, ::java::io::Serializable, ::javax::swing::text::AbstractDocument$AttributeContext)
public:
	StyleContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::text::AttributeSet* addAttribute(::javax::swing::text::AttributeSet* old, Object$* name, Object$* value) override;
	virtual ::javax::swing::text::AttributeSet* addAttributes(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attr) override;
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	virtual ::javax::swing::text::Style* addStyle($String* nm, ::javax::swing::text::Style* parent);
	virtual ::javax::swing::text::MutableAttributeSet* createLargeAttributeSet(::javax::swing::text::AttributeSet* a);
	virtual ::javax::swing::text::StyleContext$SmallAttributeSet* createSmallAttributeSet(::javax::swing::text::AttributeSet* a);
	virtual ::java::awt::Color* getBackground(::javax::swing::text::AttributeSet* attr);
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual int32_t getCompressionThreshold();
	static ::javax::swing::text::StyleContext* getDefaultStyleContext();
	virtual ::javax::swing::text::AttributeSet* getEmptySet() override;
	virtual ::java::awt::Font* getFont(::javax::swing::text::AttributeSet* attr);
	virtual ::java::awt::Font* getFont($String* family, int32_t style, int32_t size);
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f);
	virtual ::java::awt::Color* getForeground(::javax::swing::text::AttributeSet* attr);
	virtual ::javax::swing::text::AttributeSet* getImmutableUniqueSet();
	virtual ::javax::swing::text::MutableAttributeSet* getMutableAttributeSet(::javax::swing::text::AttributeSet* a);
	static $Object* getStaticAttribute(Object$* key);
	static $Object* getStaticAttributeKey(Object$* key);
	virtual ::javax::swing::text::Style* getStyle($String* nm);
	virtual ::java::util::Enumeration* getStyleNames();
	static void readAttributeSet(::java::io::ObjectInputStream* in, ::javax::swing::text::MutableAttributeSet* a);
	virtual void readAttributes(::java::io::ObjectInputStream* in, ::javax::swing::text::MutableAttributeSet* a);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reclaim(::javax::swing::text::AttributeSet* a) override;
	static void registerStaticAttributeKey(Object$* key);
	virtual ::javax::swing::text::AttributeSet* removeAttribute(::javax::swing::text::AttributeSet* old, Object$* name) override;
	virtual ::javax::swing::text::AttributeSet* removeAttributes(::javax::swing::text::AttributeSet* old, ::java::util::Enumeration* names) override;
	virtual ::javax::swing::text::AttributeSet* removeAttributes(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attrs) override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void removeStyle($String* nm);
	virtual void removeUnusedSets();
	virtual $String* toString() override;
	static void writeAttributeSet(::java::io::ObjectOutputStream* out, ::javax::swing::text::AttributeSet* a);
	virtual void writeAttributes(::java::io::ObjectOutputStream* out, ::javax::swing::text::AttributeSet* a);
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::javax::swing::text::StyleContext* defaultContext;
	static $String* DEFAULT_STYLE;
	static ::java::util::Hashtable* freezeKeyMap;
	static ::java::util::Hashtable* thawKeyMap;
	::javax::swing::text::Style* styles = nullptr;
	::javax::swing::text::StyleContext$FontKey* fontSearch = nullptr;
	::java::util::Hashtable* fontTable = nullptr;
	::java::util::Map* attributesPool = nullptr;
	::javax::swing::text::MutableAttributeSet* search = nullptr;
	int32_t unusedSets = 0;
	static const int32_t THRESHOLD = 9;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("DEFAULT_STYLE")
#pragma pop_macro("THRESHOLD")

#endif // _javax_swing_text_StyleContext_h_