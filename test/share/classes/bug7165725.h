#ifndef _bug7165725_h_
#define _bug7165725_h_
//$ class bug7165725
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

class bug7165725$GoldenElement;
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

class $export bug7165725 : public ::javax::swing::JFrame {
	$class(bug7165725, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	bug7165725();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	static void checkByCallbackForFalseTextAfterScript();
	static void checkByCallbackForSuccessiveScript();
	static ::bug7165725$GoldenElement* createFalseTextAfterScript();
	static ::bug7165725$GoldenElement* createSuccessiveScriptTags();
	virtual void execute($String* urlStr, ::bug7165725$GoldenElement* goldenElement);
	static $String* getDirURL();
	static $String* getParsedContentOneLine($String* path);
	static $String* getParsedContentOneLine(::java::net::URL* url);
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	::javax::swing::JEditorPane* editorPane = nullptr;
};

#endif // _bug7165725_h_