OBJS = *.cpp
CXX = g++ -std=c++17
##INCLUDES = -I ../1_Chapter/
CPPFLAGS = -WALL
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system 

app: $(OBJS)
	$(CXX) -o run $(OBJS) $(LDLIBS)

clean:
	$(RM) run
