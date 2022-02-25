#include "Window.h"
#include "Graph.h"
#include "Simple_window.h"

#include <string>
#include <iostream>

using namespace Graph_lib;

int main(){

        try{
        //ez egy ablak
        Point t1 {100, 100};
        Simple_window win {t1, 600, 400, "My window"};
        win.wait_for_button();
        //x-tengely
        Axis xa {Axis::x, Point{20, 300}, 280, 10, "x axis"}; 
        win.attach(xa);
        
        win.set_label("X axis");
        win.wait_for_button();
        
        //y-tengely �s sz�nezget�s
        Axis ya {Axis::y, Point{20, 300}, 280, 10, "y axis"}; 
        ya.set_color(Color::cyan);
        ya.label.set_color(Color::dark_red);
        win.attach(ya);
        
        win.set_label("Y axis");
        win.wait_for_button();
        
        //sinus f�ggv�ny
        Function sine {sin, 0, 100, Point{20, 150}, 1000, 50, 50}; 
        win.attach(sine);
        win.set_label("Sine function");
        win.wait_for_button();
        
        //h�romsz�g
        Polygon poly; 
        poly.add(Point{300, 200});
        poly.add(Point{350, 100});
        poly.add(Point{400, 200});
        
        poly.set_color(Color::red);
        poly.set_style(Line_style::dash);
        win.attach(poly);
       
        win.set_label("Polygon");
        win.wait_for_button();
        
        //t�glalap
        Rectangle r{Point{200, 200}, 100, 50}; 
        win.attach(r);
        
        Closed_polyline poly_rect;
        
        poly_rect.add(Point{100, 50});
        poly_rect.add(Point{200, 50});
        poly_rect.add(Point{200, 100});
        poly_rect.add(Point{100, 100});
        poly_rect.add(Point{50, 75});
        win.attach(poly_rect);
        
        win.set_label("Rectangle");
        win.wait_for_button();
        
        //szinez�s vonal stilus
        r.set_fill_color(Color::yellow);
        poly_rect.set_style(Line_style(Line_style::dash, 2));
        poly_rect.set_fill_color(Color::green);
        
        win.set_label("Fill");
        win.wait_for_button();
        
        //sz�veg
        Text t{Point{150, 150}, "Hello, graphical world!"}; 
        win.attach(t);
        win.set_label("Text");
        win.wait_for_button();
    
    	t.set_font(Font::times_bold);
    	t.set_font_size(20);
    	win.set_label("Canvas#9");
    	win.wait_for_button();
    	
    	Image pic {Point{100,50}, "badge.jpg"};
    	win.attach(pic);
    	win.set_label("Canvas#10");
    	win.wait_for_button();
    	
    	pic.move(200,100);
    	win.set_label("Image moved");
    	win.wait_for_button();
        
        
        
        } catch (exception& e) {
                cerr << "exception: " << e.what() << '\n';
                return 1;
        } catch (...) {
                cerr << "error\n";
                return 2;
        };

}