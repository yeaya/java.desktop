#ifndef _sun_awt_DebugSettings_h_
#define _sun_awt_DebugSettings_h_
//$ class sun.awt.DebugSettings
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_PROPS")
#undef DEFAULT_PROPS
#pragma push_macro("PREFIX")
#undef PREFIX
#pragma push_macro("PROP_CTRACE")
#undef PROP_CTRACE
#pragma push_macro("PROP_CTRACE_LEN")
#undef PROP_CTRACE_LEN
#pragma push_macro("PROP_FILE")
#undef PROP_FILE

namespace java {
	namespace util {
		class List;
		class Properties;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $export DebugSettings : public ::java::lang::Object {
	$class(DebugSettings, 0, ::java::lang::Object)
public:
	DebugSettings();
	void init$();
	bool getBoolean($String* key, bool defval);
	static ::sun::awt::DebugSettings* getInstance();
	int32_t getInt($String* key, int32_t defval);
	::java::util::List* getPropertyNames();
	$String* getString($String* key, $String* defval);
	static void init();
	void loadDefaultProperties();
	void loadFileProperties();
	void loadNativeSettings();
	void loadProperties();
	void loadSystemProperties();
	void println(Object$* object);
	void setCTracingOn(bool enabled);
	void setCTracingOn(bool enabled, $String* file);
	void setCTracingOn(bool enabled, $String* file, int32_t line);
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	static $String* PREFIX;
	static $String* PROP_FILE;
	static $StringArray* DEFAULT_PROPS;
	static ::sun::awt::DebugSettings* instance;
	::java::util::Properties* props = nullptr;
	static $String* PROP_CTRACE;
	static int32_t PROP_CTRACE_LEN;
};

	} // awt
} // sun

#pragma pop_macro("DEFAULT_PROPS")
#pragma pop_macro("PREFIX")
#pragma pop_macro("PROP_CTRACE")
#pragma pop_macro("PROP_CTRACE_LEN")
#pragma pop_macro("PROP_FILE")

#endif // _sun_awt_DebugSettings_h_