#ifndef _javax_swing_ImageIcon_h_
#define _javax_swing_ImageIcon_h_
//$ class javax.swing.ImageIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable,javax.accessibility.Accessible

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/Icon.h>

#pragma push_macro("TRACKER_KEY")
#undef TRACKER_KEY

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Image;
		class MediaTracker;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class ImageIcon$AccessibleImageIcon;
	}
}

namespace javax {
	namespace swing {

class $import ImageIcon : public ::javax::swing::Icon, public ::java::io::Serializable, public ::javax::accessibility::Accessible {
	$class(ImageIcon, 0, ::javax::swing::Icon, ::java::io::Serializable, ::javax::accessibility::Accessible)
public:
	ImageIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* filename, $String* description);
	void init$($String* filename);
	void init$(::java::net::URL* location, $String* description);
	void init$(::java::net::URL* location);
	void init$(::java::awt::Image* image, $String* description);
	void init$(::java::awt::Image* image);
	void init$($bytes* imageData, $String* description);
	void init$($bytes* imageData);
	void init$();
	static ::java::awt::Component* createNoPermsComponent();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getDescription();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual ::java::awt::Image* getImage();
	virtual int32_t getImageLoadStatus();
	virtual ::java::awt::image::ImageObserver* getImageObserver();
	int32_t getNextID();
	::java::awt::MediaTracker* getTracker();
	virtual void loadImage(::java::awt::Image* image);
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setDescription($String* description);
	virtual void setImage(::java::awt::Image* image);
	virtual void setImageObserver(::java::awt::image::ImageObserver* observer);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* filename = nullptr;
	::java::net::URL* location = nullptr;
	::java::awt::Image* image = nullptr;
	int32_t loadStatus = 0;
	::java::awt::image::ImageObserver* imageObserver = nullptr;
	$String* description = nullptr;
	static ::java::awt::Component* component;
	static ::java::awt::MediaTracker* tracker;
	static int32_t mediaTrackerID;
	static $Object* TRACKER_KEY;
	int32_t width = 0;
	int32_t height = 0;
	::javax::swing::ImageIcon$AccessibleImageIcon* accessibleContext = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("TRACKER_KEY")

#endif // _javax_swing_ImageIcon_h_