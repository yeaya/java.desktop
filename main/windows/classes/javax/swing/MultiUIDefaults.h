#ifndef _javax_swing_MultiUIDefaults_h_
#define _javax_swing_MultiUIDefaults_h_
//$ class javax.swing.MultiUIDefaults
//$ extends javax.swing.UIDefaults

#include <java/lang/Array.h>
#include <javax/swing/UIDefaults.h>

namespace java {
	namespace util {
		class Enumeration;
		class Locale;
		class Set;
	}
}

namespace javax {
	namespace swing {

class MultiUIDefaults : public ::javax::swing::UIDefaults {
	$class(MultiUIDefaults, $NO_CLASS_INIT, ::javax::swing::UIDefaults)
public:
	MultiUIDefaults();
	void init$($Array<::javax::swing::UIDefaults>* defaults);
	void init$();
	virtual void clear() override;
	virtual ::java::util::Enumeration* elements() override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* get(Object$* key, ::java::util::Locale* l) override;
	virtual void getUIError($String* msg) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Enumeration* keys() override;
	using ::javax::swing::UIDefaults::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	$Array<::javax::swing::UIDefaults>* tables = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_MultiUIDefaults_h_