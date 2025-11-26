#ifndef _javax_swing_text_html_StyleSheet$SearchBuffer_h_
#define _javax_swing_text_html_StyleSheet$SearchBuffer_h_
//$ class javax.swing.text.html.StyleSheet$SearchBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Stack;
		class Vector;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class StyleSheet$SearchBuffer : public ::java::lang::Object {
	$class(StyleSheet$SearchBuffer, 0, ::java::lang::Object)
public:
	StyleSheet$SearchBuffer();
	void init$();
	virtual void empty();
	virtual ::java::util::Hashtable* getHashtable();
	virtual ::java::lang::StringBuffer* getStringBuffer();
	virtual ::java::util::Vector* getVector();
	static ::javax::swing::text::html::StyleSheet$SearchBuffer* obtainSearchBuffer();
	static void releaseSearchBuffer(::javax::swing::text::html::StyleSheet$SearchBuffer* sb);
	static ::java::util::Stack* searchBuffers;
	::java::util::Vector* vector = nullptr;
	::java::lang::StringBuffer* stringBuffer = nullptr;
	::java::util::Hashtable* hashtable = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$SearchBuffer_h_