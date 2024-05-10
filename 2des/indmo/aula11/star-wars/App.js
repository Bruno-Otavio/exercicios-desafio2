import React from 'react';
import { NavigationContainer } from '@react-navigation/native';
import { createMaterialBottomTabNavigator } from '@react-navigation/material-bottom-tabs';
import { Ionicons } from '@expo/vector-icons';

import DarthVader from './screens/DarthVader';
import Saga1 from './screens/Saga1';
import Saga2 from './screens/Saga2';
import Saga3 from './screens/Saga3';

const Tab = createMaterialBottomTabNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Tab.Navigator
        initialRouteName='Home'
        activeColor='#00215E'
        inactiveColor='#2C4E80'
        barStyle={{backgroundColor: "#FFC55A"}}
      >
        <Tab.Screen
          name='1ª Saga'
          component={Saga1}
          options={{
            tabBarLabel: '1ª Saga',
            tabBarIcon: ({ color }) => {
              <Ionicons name='home' color={color} size={26}/>
            }
          }}
        />

        <Tab.Screen
          name='2ª Saga'
          component={Saga2}
          options={{
            tabBarLabel: '2ª Saga',
            tabBarIcon: ({ color }) => {
              <Ionicons name='home' color={color} size={26}/>
            }
          }}
        />

        <Tab.Screen
          name='3ª Saga'
          component={Saga3}
          options={{
            tabBarLabel: '3ª Saga',
            tabBarIcon: ({ color }) => {
              <Ionicons name='home' color={color} size={26}/>
            }
          }}
        />

        <Tab.Screen
          name='Darth Vader'
          component={DarthVader}
          options={{
            tabBarLabel: 'Darth Vader',
            tabBarIcon: ({ color }) => {
              <Ionicons name='home' color={color} size={26}/>
            }
          }}
        />
      </Tab.Navigator>
    </NavigationContainer>
  );
}
