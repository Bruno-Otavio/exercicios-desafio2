import React from 'react';
import { View, Text, StyleSheet } from "react-native";

const About = () => {
  return (
    <View style={styles.container}>
      <Text style={styles.title}>About Escuta Aí!</Text>
      <View>
        <Text style={styles.textContent}>
          <Text style={styles.textHighlight}>
            Welcome to Escuta Aí! 
          </Text> 
          – your ultimate destination for an immersive music experience. Our name, which translates to “Listen Up!” in English, encapsulates our passion for delivering the best tunes right to your ears.
        </Text>
      </View>

      <Text style={styles.title}>What we Offer</Text>
      <View>
        <Text style={styles.textContent}>
          <Text style={styles.textHighlight}>Vast Music Library:</Text> Dive into a sea of melodies with our extensive collection of songs across various genres and languages.
        </Text>
        <Text style={styles.textContent}>
          <Text style={styles.textHighlight}>High-Quality Audio:</Text> Experience crystal-clear sound with our high-fidelity audio streaming that ensures every note is heard in perfect clarity.
        </Text>
        <Text style={styles.textContent}>
          <Text style={styles.textHighlight}>Personalized Playlists:</Text> Create and curate your own playlists or let our intelligent algorithm suggest tracks tailored just for you.
        </Text>
        <Text style={styles.textContent}>
          <Text style={styles.textHighlight}>Anywhere, Anytime:</Text> With our responsive design, you can enjoy Escuta Aí! on any device, be it your phone, tablet, or desktop.
        </Text>
        <Text style={styles.textContent}>
          <Text style={styles.textHighlight}>Community Connection:</Text> Share your favorite tracks, connect with fellow music enthusiasts, and discover new artists together.
        </Text>
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#FEFAF6',
    alignItems: 'center',
    justifyContent: 'center',
  },
  title: {
    color: "#102C57",
    fontSize: 25,
    fontWeight: 500,
    marginBottom: 25,
  },
  textContent: {
    color: "#595959",
    fontSize: 16,
    marginBottom: 25,
    paddingRight: 25,
    paddingLeft: 25,
  },
  textHighlight: {
    color: "#102C57",
    fontWeight: 500,
  },
});

export default About;

