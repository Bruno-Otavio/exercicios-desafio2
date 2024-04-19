import React from 'react';
import { NavigationContainer } from '@react-navigation/native';
import { createMaterialBottomTabNavigator } from '@react-navigation/material-bottom-tabs';
import { Ionicons } from '@expo/vector-icons';

import MusicPlayer from './screens/music-player';
import About from './screens/about';
import PlayLists from './screens/playlists';
import Request from './screens/request';

const Tab = createMaterialBottomTabNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Tab.Navigator
        initialRouteName='About'
        activeColor='#102C57'
        inactiveColor='#FEFAF6'
        barStyle={{ backgroundColor: "#DAC0A3" }}
      >
        <Tab.Screen
          name="About"
          component={About}
          options={{
            tabBarLabel: "About",
            tabBarIcon: ({ color }) => {
              <Ionicons name='home' color={color} size={26} />
            }
          }}
        />
        
        <Tab.Screen
          name="PlayLists"
          component={PlayLists}
          options={{
            tabBarLabel: "Playlists",
            tabBarIcon: ({ color }) => {
              <Ionicons name='about' color={color} size={26} />
            }
          }}
        />

        <Tab.Screen
          name="MusicPlayer"
          component={MusicPlayer}
          options={{
            tabBarLabel: "Music Player",
            tabBarIcon: ({ color }) => {
              <Ionicons name='about' color={color} size={26} />
            }
          }}
        />
 
        <Tab.Screen
          name="Request"
          component={Request}
          options={{
            tabBarLabel: "Request Here",
            tabBarIcon: ({ color }) => {
              <Ionicons name='about' color={color} size={26} />
            }
          }}
        />
               
      </Tab.Navigator>
    </NavigationContainer>
  );
}
