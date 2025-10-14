#ifndef _javax_swing_plaf_BorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import BorderUIResource : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource, public ::java::io::Serializable {
	$class(BorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource, ::java::io::Serializable)
public:
	BorderUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::border::Border* delegate);
	static ::javax::swing::border::Border* getBlackLineBorderUIResource();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	static ::javax::swing::border::Border* getEtchedBorderUIResource();
	static ::javax::swing::border::Border* getLoweredBevelBorderUIResource();
	static ::javax::swing::border::Border* getRaisedBevelBorderUIResource();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	static ::javax::swing::border::Border* etched;
	static ::javax::swing::border::Border* loweredBevel;
	static ::javax::swing::border::Border* raisedBevel;
	static ::javax::swing::border::Border* blackLine;
	::javax::swing::border::Border* delegate = nullptr;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource_h_