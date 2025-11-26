#ifndef _javax_swing_JEditorPane_h_
#define _javax_swing_JEditorPane_h_
//$ class javax.swing.JEditorPane
//$ extends javax.swing.text.JTextComponent

#include <java/lang/Array.h>
#include <javax/swing/text/JTextComponent.h>

#pragma push_macro("HONOR_DISPLAY_PROPERTIES")
#undef HONOR_DISPLAY_PROPERTIES
#pragma push_macro("W3C_LENGTH_UNITS")
#undef W3C_LENGTH_UNITS

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace io {
		class InputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class HttpURLConnection;
		class URL;
		class URLConnection;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class SwingWorker;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class HyperlinkEvent;
			class HyperlinkListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class EditorKit;
		}
	}
}

namespace javax {
	namespace swing {

class $import JEditorPane : public ::javax::swing::text::JTextComponent {
	$class(JEditorPane, 0, ::javax::swing::text::JTextComponent)
public:
	JEditorPane();
	using ::javax::swing::text::JTextComponent::getText;
	using ::javax::swing::text::JTextComponent::getToolTipText;
	using ::javax::swing::text::JTextComponent::contains;
	using ::javax::swing::text::JTextComponent::enable;
	using ::javax::swing::text::JTextComponent::getBounds;
	using ::javax::swing::text::JTextComponent::getSize;
	using ::javax::swing::text::JTextComponent::getLocation;
	using ::javax::swing::text::JTextComponent::firePropertyChange;
	using ::javax::swing::text::JTextComponent::add;
	using ::javax::swing::text::JTextComponent::getMousePosition;
	using ::javax::swing::text::JTextComponent::list;
	void init$();
	void init$(::java::net::URL* initialPage);
	void init$($String* url);
	void init$($String* type, $String* text);
	static void access$000(::javax::swing::JEditorPane* x0, $String* x1, Object$* x2, Object$* x3);
	virtual void addHyperlinkListener(::javax::swing::event::HyperlinkListener* listener);
	virtual ::javax::swing::text::EditorKit* createDefaultEditorKit();
	static ::javax::swing::text::EditorKit* createEditorKitForContentType($String* type);
	virtual void fireHyperlinkUpdate(::javax::swing::event::HyperlinkEvent* e);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	int32_t getAsynchronousLoadPriority(::javax::swing::text::Document* doc);
	$String* getContentType();
	virtual ::javax::swing::text::EditorKit* getEditorKit();
	static $String* getEditorKitClassNameForContentType($String* type);
	virtual ::javax::swing::text::EditorKit* getEditorKitForContentType($String* type);
	virtual $Array<::javax::swing::event::HyperlinkListener>* getHyperlinkListeners();
	static ::java::util::Hashtable* getKitLoaderRegistry();
	static ::java::util::Hashtable* getKitRegisty();
	static ::java::util::Hashtable* getKitTypeRegistry();
	virtual ::java::net::URL* getPage();
	$Object* getPostData();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool getScrollableTracksViewportHeight() override;
	virtual bool getScrollableTracksViewportWidth() override;
	virtual ::java::io::InputStream* getStream(::java::net::URL* page);
	virtual $String* getText() override;
	virtual $String* getUIClassID() override;
	void handleConnectionProperties(::java::net::URLConnection* conn);
	void handlePostData(::java::net::HttpURLConnection* conn, Object$* postData);
	::javax::swing::text::Document* initializeModel(::javax::swing::text::EditorKit* kit, ::java::net::URL* page);
	static void loadDefaultKitsIfNecessary();
	virtual $String* paramString() override;
	using ::javax::swing::text::JTextComponent::read;
	using ::javax::swing::text::JTextComponent::print;
	virtual void read(::java::io::InputStream* in, Object$* desc);
	virtual void read(::java::io::InputStream* in, ::javax::swing::text::Document* doc);
	static void registerEditorKitForContentType($String* type, $String* classname);
	static void registerEditorKitForContentType($String* type, $String* classname, ::java::lang::ClassLoader* loader);
	using ::javax::swing::text::JTextComponent::remove;
	virtual void removeHyperlinkListener(::javax::swing::event::HyperlinkListener* listener);
	using ::javax::swing::text::JTextComponent::repaint;
	virtual void replaceSelection($String* content) override;
	using ::javax::swing::text::JTextComponent::requestFocus;
	using ::javax::swing::text::JTextComponent::requestFocusInWindow;
	virtual void scrollToReference($String* reference);
	void setCharsetFromContentTypeParameters($String* paramlist);
	void setContentType($String* type);
	virtual void setEditorKit(::javax::swing::text::EditorKit* kit);
	virtual void setEditorKitForContentType($String* type, ::javax::swing::text::EditorKit* k);
	virtual void setPage(::java::net::URL* page);
	virtual void setPage($String* url);
	virtual void setText($String* t) override;
	using ::javax::swing::text::JTextComponent::setUI;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::SwingWorker* pageLoader = nullptr;
	::javax::swing::text::EditorKit* kit = nullptr;
	bool isUserSetEditorKit = false;
	::java::util::Hashtable* pageProperties = nullptr;
	static $String* PostDataProperty;
	::java::util::Hashtable* typeHandlers = nullptr;
	static $Object* kitRegistryKey;
	static $Object* kitTypeRegistryKey;
	static $Object* kitLoaderRegistryKey;
	static $String* uiClassID;
	static $String* W3C_LENGTH_UNITS;
	static $String* HONOR_DISPLAY_PROPERTIES;
	static ::java::util::Map* defaultEditorKitMap;
};

	} // swing
} // javax

#pragma pop_macro("HONOR_DISPLAY_PROPERTIES")
#pragma pop_macro("W3C_LENGTH_UNITS")

#endif // _javax_swing_JEditorPane_h_