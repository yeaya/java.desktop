#ifndef _com_sun_java_swing_plaf_gtk_Metacity$PeekableStringTokenizer_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$PeekableStringTokenizer_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer
//$ extends java.util.StringTokenizer

#include <java/util/StringTokenizer.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$PeekableStringTokenizer : public ::java::util::StringTokenizer {
	$class(Metacity$PeekableStringTokenizer, $NO_CLASS_INIT, ::java::util::StringTokenizer)
public:
	Metacity$PeekableStringTokenizer();
	void init$($String* str, $String* delim, bool returnDelims);
	virtual bool hasMoreTokens() override;
	using ::java::util::StringTokenizer::nextToken;
	virtual $String* nextToken() override;
	virtual $String* peek();
	$String* token = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_Metacity$PeekableStringTokenizer_h_